/* Firmware entry: 0x48001f2a */

bool FUN_ram_48001f2a(uint *param_1,uint param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1[7] != 0) {
    return ((*param_1 | param_1[1] | param_1[2]) & param_2) == param_2;
  }
  return false;
}


