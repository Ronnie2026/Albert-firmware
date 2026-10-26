/* Firmware entry: 0x48030752 */

undefined4 FUN_ram_48030752(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 local_78 [8];
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  if ((uint)DAT_ram_4ff4b8ba != (uint)DAT_ram_4ff4b8b8) {
    iVar5 = (uint)DAT_ram_4ff4b8ba * 0x58;
    puVar6 = (undefined4 *)(&DAT_ram_4ff4a2b8 + iVar5);
    puVar4 = local_78;
    do {
      uVar2 = puVar6[1];
      uVar7 = puVar6[2];
      uVar3 = puVar6[3];
      *puVar4 = *puVar6;
      puVar4[1] = uVar2;
      puVar4[2] = uVar7;
      puVar4[3] = uVar3;
      puVar6 = puVar6 + 4;
      puVar4 = puVar4 + 4;
    } while (puVar6 != (undefined4 *)(&DAT_ram_4ff4a308 + iVar5));
    DAT_ram_4ff4b8ba = DAT_ram_4ff4b8ba + 1 & 0x3f;
    *puVar4 = *puVar6;
    cVar1 = (&DAT_ram_4ff4a2c6)[iVar5];
    iVar9 = *(int *)(&DAT_ram_4ff4a2c8 + iVar5);
    iVar8 = *(int *)(&DAT_ram_4ff4a308 + iVar5);
    fence();
    iVar5 = FUN_ram_48025b94();
    fence();
    if ((iVar8 == DAT_ram_4ff4b8c0) &&
       (((cVar1 == '\0' && (iVar9 == 0)) || ((uint)(iVar5 - iVar9) < 0x4e21)))) {
      *param_3 = 1;
    }
    else {
      *param_3 = 0;
      DAT_ram_4ff6dfa0 = DAT_ram_4ff6dfa0 + 1;
    }
    *param_1 = local_78[0];
    param_1[1] = local_78[1];
    param_1[2] = local_78[2];
    param_1[3] = local_78[3];
    param_1[4] = local_78[4];
    param_1[5] = local_78[5];
    param_1[6] = local_78[6];
    param_1[7] = local_78[7];
    param_1[8] = uStack_58;
    *param_2 = uStack_50;
    param_2[2] = uStack_48;
    param_2[3] = uStack_44;
    param_2[4] = uStack_40;
    param_2[1] = uStack_4c;
    param_2[5] = uStack_3c;
    param_2[6] = uStack_38;
    param_2[7] = uStack_34;
    param_2[8] = uStack_30;
    *(undefined1 *)(param_2 + 9) = uStack_2c;
    return 1;
  }
  return 0;
}


