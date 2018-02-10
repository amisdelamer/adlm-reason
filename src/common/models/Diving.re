type level = {
  id: Uuid.uuid,
  name: string,
  shortname: string,
  supervisedDepth: int,
  independentDepth: int,
  description: string,
};

type userLevel = {
  userId: Uuid.uuid,
  levelId: Uuid.uuid,
  /* obtainedAt: date, */
  tempFileId: option(Uuid.uuid),
  fileId: option(Uuid.uuid),
};

type divingSpot = {
  id: Uuid.uuid,
  locationId: Uuid.uuid,
  description: string,
};

type divingSpotHistory = {
  id: Uuid.uuid,
  divingSpotId: Uuid.uuid,
  editorId: Uuid.uuid,
  /* editedAt: date' */
  previousDescription: string,
};

type divingSession = {
  id: Uuid.uuid,
  spotId: Uuid.uuid,
  directorId: Uuid.uuid,
  /* at: date, */
  price: float,
  isFromBoat: bool,
};

/* Not in DB */
type step = { depth: int, time: int };

type divingTeam = {
  id: Uuid.uuid,
  sessionId: Uuid.uuid,
  isFormation: bool,
  maxDepth: int,
  /* startedAt: option(date), */
  /* endedAt: option(date), */
  /* measuredTime: option(duration), */
  measuredMaxDepth: option(int),
  steps: list(step),
  notes: option(string),
};

type diverStatus = Leader | Member | Follower;

type diver = {
  userId: Uuid.uuid,
  teamId: Uuid.uuid,
  status: diverStatus,
};
