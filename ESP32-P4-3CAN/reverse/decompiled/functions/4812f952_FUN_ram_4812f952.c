/* Firmware entry: 0x4812f952 */

void FUN_ram_4812f952(int param_1,int param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("bootloader_sha.c",0xd2,"bootloader_sha256_finish","handle != NULL");
  }
  if ((param_2 != 0) && (iVar1 = FUN_ram_4817c8a4(), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("bootloader_sha.c",0xd6,"bootloader_sha256_finish","ret == 0");
  }
  FUN_ram_4817c6c8(param_1);
  thunk_FUN_ram_4ff209c6(param_1);
  return;
}


