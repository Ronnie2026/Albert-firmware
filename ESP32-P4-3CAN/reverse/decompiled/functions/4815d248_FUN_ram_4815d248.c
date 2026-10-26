/* Firmware entry: 0x4815d248 */

void FUN_ram_4815d248(undefined4 *param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  *param_1 = &PTR_LAB_ram_48159ea6_ram_4823784c;
  if (param_2 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e06();
}


