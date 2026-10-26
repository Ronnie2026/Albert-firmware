/* Firmware entry: 0x4812f8f8 */

void FUN_ram_4812f8f8(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("bootloader_sha.c",0xc9,"bootloader_sha256_data","handle != NULL");
  }
  iVar1 = FUN_ram_4817c72e();
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("bootloader_sha.c",0xcc,"bootloader_sha256_data","ret == 0");
}


