/* Firmware entry: 0x48023cec */

void FUN_ram_48023cec(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"os_wrapper_esp","I (%lu) %s: Restarting host\n",uVar1,"os_wrapper_esp");
  FUN_ram_480007aa(thunk_FUN_ram_4800f630);
                    /* WARNING: Subroutine does not return */
  FUN_ram_480007da();
}


