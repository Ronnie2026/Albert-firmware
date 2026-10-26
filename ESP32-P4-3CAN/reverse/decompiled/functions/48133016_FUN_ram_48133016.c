/* Firmware entry: 0x48133016 */

int FUN_ram_48133016(char *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_48000386(&PTR_DAT_ram_481e39c0_ram_4ff47d88);
  if ((uVar1 & 7) == 0) {
    iVar2 = FUN_ram_48000378(&PTR_DAT_ram_481e39c0_ram_4ff47d88,param_1,uVar1);
    if (((iVar2 == 0) && (*param_1 == '\0')) &&
       (iVar3 = FUN_ram_4ff4511a(param_1,param_1 + 1,(uVar1 >> 3) - 1), iVar3 == 0)) {
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"system_api","E (%lu) %s: eFuse MAC_CUSTOM is empty\n",uVar4,"system_api");
      iVar2 = 0x10b;
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("mac_addr.c",0xd8,"get_efuse_mac_custom","(size_bits % 8) == 0");
}


