/* Firmware entry: 0x4800c902 */

undefined4
FUN_ram_4800c902(undefined4 param_1,uint *param_2,uint *param_3,undefined4 *param_4,
                undefined4 param_5,undefined4 param_6,int *param_7)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_7 = 0;
  iVar1 = FUN_ram_4800d0fa();
  if (iVar1 == 0) {
    return 0x103;
  }
  puVar2 = (undefined4 *)FUN_ram_4ff206d8(0x2c,0x1000);
  if (puVar2 == (undefined4 *)0x0) {
    return 0x101;
  }
  puVar2[5] = *param_2;
  puVar2[6] = param_2[1];
  uVar3 = *param_3;
  puVar2[2] = param_2;
  puVar2[4] = param_4;
  puVar2[7] = uVar3;
  uVar3 = param_3[1];
  *puVar2 = param_5;
  puVar2[1] = param_6;
  puVar2[8] = uVar3;
  uVar4 = *param_4;
  puVar2[3] = param_3;
  puVar2[9] = uVar4;
  puVar2[10] = param_4[1];
  param_2[1] = 0;
  *param_2 = 0;
  param_3[1] = 0;
  *param_3 = 0;
  param_4[1] = 0;
  *param_4 = 0;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47e34,0xffffffff);
  iVar5 = DAT_ram_4ff6db08 + 1;
  iVar1 = FUN_ram_4ff208e6(DAT_ram_4ff6db0c,iVar5 * 4,0x1000);
  if (iVar1 == 0) {
    FUN_ram_4ff3ee10(&DAT_ram_4ff47e34);
    thunk_FUN_ram_4ff209c6(puVar2);
    return 0x101;
  }
  if (DAT_ram_4ff6db08 == 0) {
    FUN_ram_4800d108(FUN_ram_4800ca84);
  }
  *(undefined4 **)(DAT_ram_4ff6db08 * 4 + iVar1) = puVar2;
  DAT_ram_4ff6db08 = iVar5;
  DAT_ram_4ff6db0c = iVar1;
  FUN_ram_4ff3ee10(&DAT_ram_4ff47e34);
  if (((puVar2[5] & 1) == 0) || (iVar1 = FUN_ram_4800d116(), iVar1 == 0)) {
    if (((puVar2[7] & 1) == 0) || (iVar1 = FUN_ram_4800d144(), iVar1 == 0)) goto LAB_ram_4800c9ec;
LAB_ram_4800ca74:
    *param_3 = *param_3 | 1;
  }
  else {
    *param_2 = *param_2 | 1;
    if (((puVar2[7] & 1) != 0) && (iVar1 = FUN_ram_4800d144(), iVar1 != 0)) goto LAB_ram_4800ca74;
  }
  FUN_ram_4800ea68(*puVar2,puVar2[1]);
LAB_ram_4800c9ec:
  *param_7 = (int)puVar2;
  return 0;
}


