/* Firmware entry: 0x48010238 */

undefined4 FUN_ram_48010238(undefined4 param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  (**(code **)(PTR_PTR_ram_4ff47e40 + 0xbc))();
  DAT_ram_4ff6db50 = FUN_ram_480229f0();
  if (DAT_ram_4ff6db50 != 0) {
    FUN_ram_480219ce();
    DAT_ram_4ff6db58 = param_1;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("transport_drv.c",0x6b,"transport_drv_init","bus_handle");
}


