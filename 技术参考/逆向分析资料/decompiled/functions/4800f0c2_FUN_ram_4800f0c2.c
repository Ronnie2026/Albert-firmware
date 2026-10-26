/* Firmware entry: 0x4800f0c2 */

void FUN_ram_4800f0c2(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"H_API","I (%lu) %s: Transport active\n",uVar1,"H_API");
  DAT_ram_4ff6db44 = 1;
  return;
}


