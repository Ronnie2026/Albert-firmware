/* Firmware entry: 0x4ff4568e */

int FUN_ram_4ff4568e(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_1[2] == 0) || (*(int *)param_1[2] == 0)) ||
     (iVar1 = (**(code **)param_1[2])(param_1[3],param_2), iVar1 == 0)) {
    (*(code *)**(undefined4 **)*param_1)(*param_1);
    iVar1 = 0;
  }
  return iVar1;
}


