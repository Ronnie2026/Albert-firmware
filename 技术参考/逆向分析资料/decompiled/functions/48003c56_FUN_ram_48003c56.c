/* Firmware entry: 0x48003c56 */

undefined4 FUN_ram_48003c56(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint auStack_28 [5];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff4bdfc == 0) && (FUN_ram_4ff2162e(&DAT_ram_4ff4bdfc), DAT_ram_4ff4bdfc == 0)) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sleep","E (%lu) %s: Create sleep retention lock failed\n",uVar1,"sleep");
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0x101;
  }
  FUN_ram_4ff216dc(&DAT_ram_4ff4bdfc);
  auStack_28[1] = DAT_ram_4ff4be10;
  auStack_28[0] = DAT_ram_4ff4be0c;
  uVar3 = param_1 & 0x1f;
  if ((auStack_28[param_1 >> 5] >> uVar3 & 1) == 0) {
    auStack_28[0] = DAT_ram_4ff4be04;
    auStack_28[1] = DAT_ram_4ff4be08;
    if ((auStack_28[param_1 >> 5] >> uVar3 & 1) == 0) {
      iVar5 = param_1 * 0x1c;
      *(undefined4 *)(&DAT_ram_4ff4be14 + iVar5) = *param_2;
      uVar6 = param_2[1];
      *(undefined4 *)(&DAT_ram_4ff4be1c + iVar5) = 0;
      *(undefined4 *)(&DAT_ram_4ff4be20 + iVar5) = 0;
      *(undefined4 *)(&DAT_ram_4ff4be24 + iVar5) = 0;
      *(undefined4 *)(&DAT_ram_4ff4be28 + iVar5) = 0;
      uVar2 = param_2[4];
      uVar1 = param_2[3];
      iVar4 = (param_1 >> 5) + 0x30;
      *(undefined4 *)(&DAT_ram_4ff4be18 + iVar5) = uVar6;
      *(undefined4 *)(&DAT_ram_4ff4be20 + iVar5) = uVar2;
      *(undefined4 *)(&DAT_ram_4ff4be1c + iVar5) = uVar1;
      uVar1 = param_2[2];
      (&DAT_ram_4ff4bd44)[iVar4] = (&DAT_ram_4ff4bd44)[iVar4] | 1 << uVar3;
      *(undefined4 *)(&DAT_ram_4ff4be2c + iVar5) = uVar1;
      uVar1 = 0;
      goto LAB_ram_48003cae;
    }
  }
  uVar1 = 0x103;
LAB_ram_48003cae:
  FUN_ram_4ff216e6(&DAT_ram_4ff4bdfc);
  return uVar1;
}


