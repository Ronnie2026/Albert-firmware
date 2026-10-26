/* Firmware entry: 0x48008e6a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_48008e6a(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = param_1 * 0x38;
  FUN_ram_4ff216d6(&DAT_ram_4ff48220 + iVar2);
  if ((&DAT_ram_4ff48238)[iVar2] != '\0') {
    uVar1 = 0;
    goto LAB_ram_48008f18;
  }
  if (param_1 < 5) {
    FUN_ram_4ff3122a();
    if (param_1 == 3) {
      _DAT_ram_500e601c = _DAT_ram_500e601c | 0x400;
      _DAT_ram_500e6018 = _DAT_ram_500e6018 | 0x200000;
      FUN_ram_4ff31240();
      if (DAT_ram_4ff482e8 == -1) {
        gpio_matrix_in(0x3f,DAT_ram_48235dd8 >> 0x14,0);
      }
      FUN_ram_4ff3122a();
      uVar3 = 0x10000;
      iVar4 = -0x10000;
    }
    else if (param_1 == 4) {
      _DAT_ram_500e601c = _DAT_ram_500e601c | 0x800;
      _DAT_ram_500e6018 = _DAT_ram_500e6018 | 0x400000;
      FUN_ram_4ff31240();
      if (DAT_ram_4ff48320 == -1) {
        gpio_matrix_in(0x3f,DAT_ram_48235dec >> 0x14,0);
        FUN_ram_4ff3122a();
      }
      else {
        FUN_ram_4ff3122a();
      }
      uVar3 = 0x20000;
      iVar4 = -0x20000;
    }
    else if (param_1 == 1) {
      _DAT_ram_500e601c = _DAT_ram_500e601c | 0x100;
      _DAT_ram_500e6018 = _DAT_ram_500e6018 | 0x80000;
      FUN_ram_4ff31240();
      if (DAT_ram_4ff48278 == -1) {
        gpio_matrix_in(0x3f,DAT_ram_48235db0 >> 0x14,0);
      }
      FUN_ram_4ff3122a();
      uVar3 = 0x4000;
      iVar4 = -0x4000;
    }
    else {
      if (param_1 != 2) {
        _DAT_ram_500e601c = _DAT_ram_500e601c | 0x80;
        _DAT_ram_500e6018 = _DAT_ram_500e6018 | 0x40000;
        FUN_ram_4ff31240();
        goto LAB_ram_48008f06;
      }
      _DAT_ram_500e601c = _DAT_ram_500e601c | 0x200;
      _DAT_ram_500e6018 = _DAT_ram_500e6018 | 0x100000;
      FUN_ram_4ff31240();
      if (DAT_ram_4ff482b0 == -1) {
        gpio_matrix_in(0x3f,DAT_ram_48235dc4 >> 0x14,0);
      }
      FUN_ram_4ff3122a();
      uVar3 = 0x8000;
      iVar4 = -0x8000;
    }
    _DAT_ram_500e60c4 = (_DAT_ram_500e60c4 | uVar3) & iVar4 - 1U;
    FUN_ram_4ff31240();
    FUN_ram_4ff3122a();
    puVar5 = *(undefined1 **)(&DAT_ram_4ff48228 + param_1 * 0x38);
    if (puVar5 == &DAT_ram_500ca000) {
      _DAT_ram_500e6068 = _DAT_ram_500e6068 | 0x4000000;
    }
    else if (puVar5 == &DAT_ram_500cb000) {
      _DAT_ram_500e606c = _DAT_ram_500e606c | 0x4000000;
    }
    else if (puVar5 == &DAT_ram_500cc000) {
      _DAT_ram_500e6070 = _DAT_ram_500e6070 | 0x4000000;
    }
    else if (puVar5 == &DAT_ram_500cd000) {
      _DAT_ram_500e6074 = _DAT_ram_500e6074 | 0x4000000;
    }
    else {
      if (puVar5 != &DAT_ram_500ce000) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e06();
      }
      _DAT_ram_500e6078 = _DAT_ram_500e6078 | 0x4000000;
    }
    *(uint *)(puVar5 + 0x88) = *(uint *)(puVar5 + 0x88) | 0x1000000;
    *(uint *)(puVar5 + 0x88) = *(uint *)(puVar5 + 0x88) | 0x2000000;
    FUN_ram_4ff31240();
  }
  else {
    if (*(int *)(&DAT_ram_4ff48240 + iVar2) == -1) {
      FUN_ram_4812c6d8(0x30,*(uint *)(&DAT_ram_48235d9c + param_1 * 0x14) >> 0x14,0);
    }
    FUN_ram_4ff3122a();
    _DAT_ram_50120000 = _DAT_ram_50120000 | 0x20000000;
    _DAT_ram_50120008 = _DAT_ram_50120008 & 0xefffffff;
    FUN_ram_4ff31240();
    _DAT_ram_50121088 = _DAT_ram_50121088 | 0x3000000;
  }
LAB_ram_48008f06:
  (&DAT_ram_4ff48238)[param_1 * 0x38] = 1;
  uVar1 = 1;
LAB_ram_48008f18:
  FUN_ram_4ff216e2(&DAT_ram_4ff48220 + iVar2);
  return uVar1;
}


