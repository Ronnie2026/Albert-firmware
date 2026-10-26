/* Firmware entry: 0x48031046 */

void FUN_ram_48031046(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 local_68 [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar4 = (uint)DAT_ram_4ff4b8b8;
  uVar5 = (uint)DAT_ram_4ff4b8ba;
  fence();
  uVar2 = uVar4 + 1 & 0x3f;
  if (uVar5 == uVar2) {
    DAT_ram_4ff6dfa8 = DAT_ram_4ff6dfa8 + 1;
    fence();
    DAT_ram_4ff6df98 = 1;
    if (DAT_ram_4ff6dfe4 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4803119e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*DAT_ram_4ff6dfe4 + 0x14c))();
      return;
    }
    return;
  }
  local_68[1] = param_1[1];
  local_68[0] = *param_1;
  local_68[3] = param_1[3];
  local_68[4] = param_1[4];
  local_68[5] = param_1[5];
  local_68[6] = param_1[6];
  local_68[7] = param_1[7];
  local_68[2] = param_1[2];
  local_68[8] = param_1[8];
  local_68[10] = *param_2;
  local_68[0xb] = param_2[1];
  local_68[0xd] = param_2[3];
  local_68[0xc] = param_2[2];
  local_68[0xe] = param_2[4];
  local_68[0xf] = param_2[5];
  local_68[0x10] = param_2[6];
  local_68[0x11] = param_2[7];
  local_68[0x12] = param_2[8];
  local_68[0x13] = param_2[9];
  fence();
  local_68[0x14] = DAT_ram_4ff4b8c0;
  puVar6 = local_68;
  puVar7 = (undefined4 *)(&DAT_ram_4ff4a2b8 + uVar4 * 0x58);
  do {
    uVar8 = puVar6[1];
    uVar1 = puVar6[2];
    uVar3 = puVar6[3];
    *puVar7 = *puVar6;
    puVar7[1] = uVar8;
    puVar7[2] = uVar1;
    puVar7[3] = uVar3;
    puVar6 = puVar6 + 4;
    puVar7 = puVar7 + 4;
  } while (puVar6 != local_68 + 0x14);
  *puVar7 = *puVar6;
  fence();
  DAT_ram_4ff4b8b8 = (ushort)uVar2;
  uVar2 = uVar2 - uVar5 & 0x3f;
  if (DAT_ram_4ff4b8bc < uVar2) {
    DAT_ram_4ff4b8bc = (ushort)uVar2;
  }
  if ((DAT_ram_4ff6dfe4 != (int *)0x0) && (uVar4 == uVar5)) {
                    /* WARNING: Could not recover jumptable at 0x4803115c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_ram_4ff6dfe4 + 0x14c))();
    return;
  }
  return;
}


