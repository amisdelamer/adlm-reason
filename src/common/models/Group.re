type groupStatus = Public | Protected | Private;

type group = {
  id: Uuid.uuid,
  creatorId: Uuid.uuid,
  name: string,
  status: groupStatus,
};

type groupMember = {
  userId: Uuid.uuid,
  groupId: Uuid.uuid,
  isAdmin: bool,
};
