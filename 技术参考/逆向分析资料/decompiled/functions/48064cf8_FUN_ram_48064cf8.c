/* Firmware entry: 0x48064cf8 */

void FUN_ram_48064cf8(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined2 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar1 = *(char *)(param_1 + 0xcc0);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x40) = *(undefined4 *)(param_1 + 8);
  if ((((cVar1 != '\0') && (*(char *)(param_1 + 0xcc1) == '\0')) && (*(int *)(param_1 + 0x89c) != 0)
      ) && (*(int *)(*(int *)(param_1 + 0x89c) + 0xc) != 0)) {
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    FUN_ram_48064bd0(&DAT_ram_4ff5ce9c,&uStack_38);
    uVar11 = FUN_ram_4ff21a0a();
    DAT_ram_4ff5cea8 = __divdi3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),1000,0);
    DAT_ram_4ff5cea0 = 1;
    DAT_ram_4ff5cea4 = 10;
    DAT_ram_4ff5ceac = DAT_ram_4ff5cea8 + 10000;
    DAT_ram_4ff5ceb4 = 0;
    DAT_ram_4ff5ce9c = DAT_ram_4ff5ce9c + 2;
    DAT_ram_4ff5ceb0 = DAT_ram_4ff5cea8;
    *(undefined4 *)(param_1 + 0x8b8) = 0;
    pcVar6 = *(code **)(*(int *)(param_1 + 0x89c) + 0xc);
    *(undefined4 *)(param_1 + 0x8b0) = 3;
    (*pcVar6)();
    FUN_ram_48064c42(&DAT_ram_4ff5ce98,&uStack_38);
  }
  if (*(char *)(param_1 + 0x1cf4) != '\0') {
    if (param_3 == 4) {
      *(undefined1 *)(param_1 + 0x1d28) = 1;
    }
    else if ((param_3 - 5U & 0xff) < 2) {
      *(undefined1 *)(param_1 + 0x1d29) = 1;
    }
    uVar2 = *(undefined2 *)(param_1 + 0x1cf8);
    iVar4 = FUN_ram_4ff21a0a();
    *(bool *)(param_1 + 0x1d27) = param_3 == 0;
    *(undefined2 *)(param_1 + 0x1d0a) = uVar2;
    iVar5 = 0;
    if (*(int *)(param_1 + 0x1d3c) != 0 || *(int *)(param_1 + 0x1d38) != 0) {
      iVar5 = iVar4 - *(int *)(param_1 + 0x1d38);
    }
    *(int *)(param_1 + 0x1d10) = iVar5;
    pcVar6 = *(code **)(*(int *)(param_1 + 4) + 0x3c);
    *(int *)(param_1 + 0x1d14) = iVar4 - *(int *)(param_1 + 0x1d30);
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(param_1 + 0x1d00);
    }
  }
  if (*(code **)(param_1 + 0x1cec) != (code *)0x0) {
    (**(code **)(param_1 + 0x1cec))(*(undefined4 *)(param_1 + 0x1cf0),param_3 == 0);
  }
  if (*(int *)(param_1 + 0x1cdc) != 0) {
    FUN_ram_4ff209c6();
  }
  *(undefined4 *)(param_1 + 0x1cdc) = 0;
  if (*(int *)(param_1 + 0x1cc8) != 0) {
    FUN_ram_4ff209c6();
  }
  uVar7 = (uint)*(byte *)(param_1 + 0x44c);
  *(undefined4 *)(param_1 + 0x1cc8) = 0;
  *(undefined4 *)(param_1 + 0x1cc4) = 0;
  if (uVar7 < 5) {
    uVar9 = 5;
    if (uVar7 < 3) {
      uVar9 = 3;
      if (uVar7 != 1) {
        uVar9 = (uint)(uVar7 == 2) << 2;
      }
    }
  }
  else {
    uVar9 = 7;
    if (uVar7 != 5) {
      uVar9 = uVar7 & -(uint)(uVar7 == 6);
    }
  }
  uVar8 = *(undefined4 *)(param_1 + 0x898);
  uVar7 = *(uint *)(param_1 + 8);
  uVar11 = FUN_ram_4ff21a0a();
  if (*(char *)(param_1 + 0x44c) == '\x01') {
    iVar4 = *(int *)(param_1 + 0x480) + 5000;
  }
  else if (*(char *)(param_1 + 0x44c) == '\x02') {
    iVar4 = *(int *)(param_1 + 0x484) + 10000;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x480) + 120000;
  }
  if (2 < uVar7) {
    return;
  }
  uVar10 = *(undefined4 *)(param_1 + 0x488);
  piVar3 = &DAT_ram_4ff5ced4 + uVar7 * 7;
  *piVar3 = *piVar3 + 1;
  (&DAT_ram_4ff5ced8)[uVar7 * 7] = uVar8;
  (&DAT_ram_4ff5cedc)[uVar7 * 7] = uVar9;
  uVar8 = __divdi3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),1000,0);
  (&DAT_ram_4ff5cee0)[uVar7 * 7] = uVar8;
  (&DAT_ram_4ff5cee4)[uVar7 * 7] = iVar4;
  (&DAT_ram_4ff5cee8)[uVar7 * 7] = uVar10;
  (&DAT_ram_4ff5ceec)[uVar7 * 7] = 0;
  *piVar3 = *piVar3 + 1;
  return;
}


