/* Firmware entry: 0x4812ec12 */

int FUN_ram_4812ec12(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(short *)(param_1 + 0xc) == 0x12) {
    if ((param_2 == 1) || (iVar2 = 0, param_2 == 0)) {
      iVar2 = FUN_ram_4812e8c8();
      return iVar2 + -1;
    }
  }
  else {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"boot_comm","E (%lu) %s: mismatch chip ID, expected %d, found %d\n",uVar1,
                     "boot_comm",0x12,*(undefined2 *)(param_1 + 0xc));
    iVar2 = -1;
  }
  return iVar2;
}


