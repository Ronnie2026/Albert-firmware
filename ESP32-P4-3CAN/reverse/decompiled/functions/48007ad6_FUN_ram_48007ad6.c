/* Firmware entry: 0x48007ad6 */

undefined4 FUN_ram_48007ad6(uint param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (2 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("uart_vfs.c",0x16a,"uart_fcntl","fd >= 0 && fd < 3");
  }
  if (param_2 == 3) {
    uVar1 = 0x4002;
    if ((&PTR_DAT_ram_4ff48158_ram_481e5190)[param_1][0x10] == '\0') {
      return 2;
    }
  }
  else if (param_2 == 4) {
    (&PTR_DAT_ram_4ff48158_ram_481e5190)[param_1][0x10] = (byte)(param_3 >> 0xe) & 1;
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_ram_4819bf88();
    *puVar2 = 0x58;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


