/* Firmware entry: 0x4816076c */

undefined4
FUN_ram_4816076c(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = 0xc000000;
  if ((int)param_3 < 0) {
    param_3 = param_3 & 0x7fffffff;
    uVar2 = 0x8000000;
  }
  iVar1 = (**(code **)(param_1 + 0x60))
                    (*(undefined4 *)(param_1 + 4),param_4,param_5,param_4,param_5,
                     *(code **)(param_1 + 0x60));
  if (iVar1 != 0) {
    uVar2 = FUN_ram_481604a4(param_1,param_2,param_3,uVar2,param_4,param_5);
    return uVar2;
  }
  return 0x102;
}


