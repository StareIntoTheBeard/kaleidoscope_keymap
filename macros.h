enum {
       PIPELINE,
       GITSTATUS,
       GITADD,
       GITCOMMIT,
       GITAMEND,
       VISAVE
     };


static void pipelineMacro(uint8_t keyState) {
    if (keyToggledOn(keyState)) {
    Macros.type(PSTR("|>"));
  }
}

static void gitStatusMacro(uint8_t keyState) {
    if (keyToggledOn(keyState)) {
    Macros.type(PSTR("git status\n"));
  }
}

static void gitAddMacro(uint8_t keyState) {
    if (keyToggledOn(keyState)) {
    Macros.type(PSTR("git add .\n"));
  }
}

static void gitCommitMacro(uint8_t keyState) {
    if (keyToggledOn(keyState)) {
    Macros.type(PSTR("git commit -m ''"));
    kaleidoscope::hid::pressKey(Key_LeftArrow);
  }
}

static void gitAmendMacro(uint8_t keyState) {
    if (keyToggledOn(keyState)) {
    Macros.type(PSTR("git commit --amend\n"));
  }
}


static void viSaveMacro(uint8_t keyState) {
    if (keyToggledOn(keyState)) {
    Macros.type(PSTR(":wq\n"));
  }
}


const macro_t *macroAction(uint8_t macroIndex, uint8_t keyState) {
  switch (macroIndex) {

  case PIPELINE:
    pipelineMacro(keyState);
    break;

  case GITSTATUS:
    gitStatusMacro(keyState);
    break;

  case GITADD:
    gitAddMacro(keyState);
    break;

  case GITCOMMIT:
    gitCommitMacro(keyState);
    break;

  case GITAMEND:
    gitAmendMacro(keyState);
    break;

  case VISAVE:
    viSaveMacro(keyState);
    break;
  }
  return MACRO_NONE;
}

