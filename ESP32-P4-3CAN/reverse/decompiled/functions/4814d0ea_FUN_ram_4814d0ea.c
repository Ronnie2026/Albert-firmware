/* Firmware entry: 0x4814d0ea */

undefined4 FUN_ram_4814d0ea(int param_1)

{
  undefined4 extraout_a3;
  undefined4 extraout_a4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 0x20;
  *(undefined1 *)(param_1 + 0x21) = 0;
  FUN_ram_48139f8a(*(undefined4 *)(param_1 + 0x1c));
  (**(code **)(param_1 + 0x14))
            (param_1,*(undefined1 *)(param_1 + 0x21),*(undefined4 *)(param_1 + 0x18),extraout_a3,
             extraout_a4,*(code **)(param_1 + 0x14));
  return 1;
}


