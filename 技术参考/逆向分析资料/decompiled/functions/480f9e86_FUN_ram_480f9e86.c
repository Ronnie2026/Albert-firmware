/* Firmware entry: 0x480f9e86 */

int FUN_ram_480f9e86(int param_1,undefined4 param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  short *psVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6dd34 == '\0') || (DAT_ram_4ff6dd30 != param_1)) {
    if (DAT_ram_4ff6dd38 != param_1) {
      return 0;
    }
    if (DAT_ram_4ff6dd36 == '\0') {
      return 0;
    }
    if (DAT_ram_4ff6dd35 == '\0') {
      return 0;
    }
    puVar5 = &DAT_ram_4ff5c4c4;
    cVar2 = '\0';
  }
  else {
    puVar5 = &DAT_ram_4ff5c484;
    cVar2 = DAT_ram_4ff6dd34;
  }
  psVar7 = (short *)((int)puVar5 + 2);
  do {
    sVar1 = *psVar7;
    psVar7 = psVar7 + 1;
    if (0xfe < (ushort)(sVar1 - 1U)) {
      return 0;
    }
  } while (psVar7 != (short *)((int)puVar5 + 0x3e));
  iVar3 = FUN_ram_480f9c70(&DAT_ram_4ff60e20,param_2,puVar5,cVar2);
  if (iVar3 == 0) {
    return 0;
  }
  if (cVar2 == '\0') {
    return iVar3;
  }
  puVar8 = &DAT_ram_4ff5c484;
  puVar5 = &DAT_ram_4ff5c4c4;
  do {
    uVar10 = puVar8[1];
    uVar9 = puVar8[2];
    uVar4 = puVar8[3];
    uVar6 = puVar8[4];
    *puVar5 = *puVar8;
    puVar5[1] = uVar10;
    puVar5[2] = uVar9;
    puVar5[3] = uVar4;
    puVar5[4] = uVar6;
    puVar8 = puVar8 + 5;
    puVar5 = puVar5 + 5;
  } while (puVar8 != (undefined4 *)0x4ff5c4c0);
  *(undefined2 *)puVar5 = uRam4ff5c4c0;
  DAT_ram_4ff47e5c = DAT_ram_4ff47e5c + 1;
  if (DAT_ram_4ff47e5c == 0) {
    DAT_ram_4ff47e5c = 1;
  }
  if (DAT_ram_4ff6dd34 != '\0') {
    if (param_1 == DAT_ram_4ff6dd30) {
      DAT_ram_4ff6dd30 = 0;
      DAT_ram_4ff6dd34 = 0;
      DAT_ram_4ff6dd35 = 1;
      DAT_ram_4ff6dd36 = 1;
      DAT_ram_4ff6dd38 = param_1;
      return iVar3;
    }
    DAT_ram_4ff6dd35 = 1;
    DAT_ram_4ff6dd36 = 1;
    DAT_ram_4ff6dd38 = param_1;
    return iVar3;
  }
  DAT_ram_4ff6dd35 = 1;
  DAT_ram_4ff6dd36 = 1;
  DAT_ram_4ff6dd38 = param_1;
  return iVar3;
}


