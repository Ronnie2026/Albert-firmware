/* Firmware entry: 0x48093828 */

uint FUN_ram_48093828(int *param_1,int *param_2,int param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((*(char *)((int)param_2 + 0xd) == '\x04') && (*param_2 == 0x370)) &&
      ((char)param_2[1] == '\b')) && (*(char *)((int)param_2 + 0x1b) == '\x12')) {
    if (*param_1 != 0) {
      fence();
      if (((*(int *)(param_3 + 0x2c) != 0) && (*(int *)(param_3 + 0x2c) == param_1[0x13e])) &&
         ((*(int *)(param_3 + 0x30) != 0 && (*(int *)(param_3 + 0x30) == param_1[0x13d])))) {
        return (uint)(*(uint *)(param_3 + 0x34) == *(uint *)(*param_1 + 0x18d84)) &
               *(uint *)(param_3 + 0x34) >> 0x1f;
      }
    }
    return 0;
  }
  return 1;
}


