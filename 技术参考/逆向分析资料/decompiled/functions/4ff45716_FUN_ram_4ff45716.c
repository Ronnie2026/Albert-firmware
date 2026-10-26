/* Firmware entry: 0x4ff45716 */

int FUN_ram_4ff45716(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,
                    undefined4 param_5)

{
  int iVar1;
  code *pcVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_3 == 0) && (iVar1 = (**(code **)PTR_PTR_ram_4ff53080)(), iVar1 != 0)) {
    if (param_2 != 0) {
      iVar1 = param_2;
    }
    return iVar1;
  }
  pcVar2 = *(code **)(*(int *)*param_1 + 0x44);
  if ((pcVar2 == (code *)0x0) || (iVar1 = (*pcVar2)((int *)*param_1,param_4,param_5), param_2 != 0))
  {
    iVar1 = param_2;
  }
  iVar1 = (**(code **)(PTR_PTR_ram_4ff53080 + 4))(param_1,iVar1);
  return iVar1;
}


