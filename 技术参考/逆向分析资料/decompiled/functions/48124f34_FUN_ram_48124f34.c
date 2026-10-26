/* Firmware entry: 0x48124f34 */

undefined4 FUN_ram_48124f34(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_48128d9c(&DAT_ram_4ff6c1a8,*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_ram_48126e70(param_1);
  if (DAT_ram_4ff6e068 != 0) {
    FUN_ram_481a3b46(PTR_s_WIFI_EVENT_ram_481c1dec_ram_481f4c60,0xffffffff,
                     &PTR_DAT_ram_481f57b7_ram_48124dc8);
    DAT_ram_4ff6e068 = 0;
  }
  return 1;
}


