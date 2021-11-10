/** @jsxImportSource @emotion/react */

import {
  Box, Button, Heading, Table, TableCaption, Tbody, Td, Th, Thead, Tr,
} from '@chakra-ui/react';
import { useEffect, useState } from 'react';
import moment from 'moment';
import { IconChevronRight } from '@tabler/icons';
import { Link, useRouteMatch } from 'react-router-dom';
import { getFollowUpCalls } from '../../../../redux/api/user/user';

const FollowUp = () => {
  const [calls, setCalls] = useState([]);
  const { path } = useRouteMatch();
  useEffect(async () => {
    const res = await getFollowUpCalls();
    setCalls(res.data.results);
    console.log(res.data.results);
  });
  return (
    <Box px={8}>
      <Heading>
        Follow-up calls
      </Heading>
      <Table
        variant="simple"
        mt="2.5rem"
        backgroundColor="#F8F8F8"
        borderRadius="xl"
      >
        <TableCaption>List of available follow-up calls</TableCaption>
        <Thead>
          <Tr>
            <Th fontSize="md">No.</Th>
            <Th fontSize="md">Customer name</Th>
            <Th fontSize="md">Caller name</Th>
            <Th fontSize="md">Follow-up date</Th>
            <Th fontSize="md">Reason</Th>
            <Th fontSize="md" color="teal">Connect now</Th>
          </Tr>
        </Thead>
        <Tbody>
          {calls.map((call, index) => (
            <Tr key={call.id}>
              <Td>{index + 1}</Td>
              <Td>{call.client.name}</Td>
              <Td>{call.caller.name}</Td>
              <Td>{moment.utc(call.follow_up_date_time).format('DD-MM-YYYY hh:mm:ss')}</Td>
              <Td>{call.remark}</Td>
              <Td justifyContent="center">
                <Button background="green.200" w="50%" as={Link} to={`${path}/${call.client.id}`}>
                  <span><IconChevronRight /></span>
                </Button>
              </Td>
            </Tr>
          ))}
        </Tbody>
      </Table>
    </Box>
  );
};

export default FollowUp;
