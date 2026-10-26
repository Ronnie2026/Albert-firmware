/* Firmware entry: 0x480edbbe */

int FUN_ram_480edbbe(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_170 [47];
  undefined4 local_b4 [42];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar7 = local_170;
  *(undefined1 *)((int)param_1 + 0x8b) = 0;
  puVar8 = param_1 + 0x28;
  puVar6 = local_b4;
  do {
    uVar2 = param_1[1];
    uVar4 = param_1[2];
    uVar5 = param_1[3];
    *puVar6 = *param_1;
    puVar6[1] = uVar2;
    puVar6[2] = uVar4;
    puVar6[3] = uVar5;
    param_1 = param_1 + 4;
    puVar6 = puVar6 + 4;
  } while (param_1 != puVar8);
  puVar8 = local_b4;
  *puVar6 = *param_1;
  do {
    uVar2 = puVar8[1];
    uVar4 = puVar8[2];
    uVar5 = puVar8[3];
    *puVar7 = *puVar8;
    puVar7[1] = uVar2;
    puVar7[2] = uVar4;
    puVar7[3] = uVar5;
    puVar8 = puVar8 + 4;
    puVar7 = puVar7 + 4;
  } while (puVar8 != local_b4 + 0x28);
  *puVar7 = *puVar8;
  iVar3 = FUN_ram_480ed9a4(local_170);
  if (iVar3 != 0) {
    FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
    uVar1 = DAT_ram_4ff61958._1_1_;
    FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
    FUN_ram_48032f3e(uVar1);
  }
  return iVar3;
}


