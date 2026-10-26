/* Firmware entry: 0x480b3dca */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_480b3dca(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_29c [166];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar6 = &DAT_ram_482230e4;
  puVar5 = local_29c;
  do {
    uVar8 = puVar6[1];
    uVar7 = puVar6[2];
    uVar1 = puVar6[3];
    uVar3 = puVar6[4];
    uVar4 = puVar6[5];
    *puVar5 = *puVar6;
    puVar5[1] = uVar8;
    puVar5[2] = uVar7;
    puVar5[3] = uVar1;
    puVar5[4] = uVar3;
    puVar5[5] = uVar4;
    puVar6 = puVar6 + 6;
    puVar5 = puVar5 + 6;
  } while (puVar6 != (undefined4 *)&DAT_ram_4822336c);
  *puVar5 = _DAT_ram_4822336c;
  iVar2 = FUN_ram_4808d01a(local_29c);
  if (iVar2 != 0) {
    FUN_ram_480b3b14(local_29c);
  }
  return;
}


