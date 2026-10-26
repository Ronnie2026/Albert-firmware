/* Firmware entry: 0x48107f1e */

void FUN_ram_48107f1e(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_c4;
  undefined4 auStack_c0 [42];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  FUN_ram_4ff3ec14(iVar1 + 0xb18,0xffffffff);
  puVar6 = (undefined4 *)(iVar1 + 0xb38);
  puVar5 = &local_c4;
  do {
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    *puVar5 = *puVar6;
    puVar5[1] = uVar2;
    puVar5[2] = uVar3;
    puVar5[3] = uVar4;
    puVar6 = puVar6 + 4;
    puVar5 = puVar5 + 4;
  } while (puVar6 != (undefined4 *)(iVar1 + 0xbd8));
  *puVar5 = *puVar6;
  FUN_ram_4ff3ee10(iVar1 + 0xb18);
  FUN_ram_481062c4(param_1,param_2);
  if ((local_c4._1_1_ == '\f') && (param_1[0x7b] != 0x3c2)) {
    if ((char)param_1[0x79] == '\0') goto LAB_ram_48107fbe;
  }
  else {
    if ((char)param_1[0x79] == '\0') {
LAB_ram_48107fbe:
      *(undefined1 *)(param_1 + 0x14b) = 0;
      return;
    }
    *(undefined1 *)(param_1 + 0x14b) = 1;
    *(undefined1 *)((int)param_1 + 0x4ff) = *(undefined1 *)((int)param_1 + 0x1f2);
  }
  return;
}


