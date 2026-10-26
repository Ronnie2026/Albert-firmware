/* Firmware entry: 0x4818681c */

void FUN_ram_4818681c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e2a0 == 0) {
    iVar1 = FUN_ram_4800340c(0x45,0,FUN_ram_4ff2d658,0,0);
    if (iVar1 != 0) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: Failed to allocate AES interrupt %d\n",uVar2,
                       "esp-aes",iVar1);
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e06();
    }
    DAT_ram_4ff6e2a0 = FUN_ram_4ff3aca6(1,0,0,&DAT_ram_4ff6d5d8,3);
    if (DAT_ram_4ff6e2a0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("esp_aes_dma_core.c",0x7b,"esp_aes_intr_alloc","op_complete_sem != NULL");
    }
  }
  return;
}


