type location = {
  id: Uuid.uuid,
  name: string,
  address: string,
};

type file = {
  id: Uuid.uuid,
  creatorId: Uuid.uuid,
  /* createdAt: date, */
  name: string,
  path: string,
  kind: string,
  size: int,
};

/* Need to lock table */
type bill = {
  id: Uuid.uuid,
  creatorId: Uuid.uuid,
  /* createdAt: date, */
  targetId: Uuid.uuid,
  amount: float,
  eventId: option(Uuid.uuid),
  activityId: option(Uuid.uuid),
  divingSessionId: option(Uuid.uuid),
  note: option(string),
};


type settings = {
  googleMapsApiKey: string,
  levelN1Id: Uuid.uuid,
  levelN2Id: Uuid.uuid,
  levelN3Id: Uuid.uuid,
  levelN4Id: Uuid.uuid,
  levelN5Id: Uuid.uuid,
  levelRifapId: Uuid.uuid,
  levelNitroxSimpleId: Uuid.uuid,
  levelNitroxComplexId: Uuid.uuid,
  levelInitId: Uuid.uuid,
  levelMF1Id: Uuid.uuid,
  levelMF2Id: Uuid.uuid,
  levelBio1Id: Uuid.uuid,
  levelBio2Id: Uuid.uuid,
};
