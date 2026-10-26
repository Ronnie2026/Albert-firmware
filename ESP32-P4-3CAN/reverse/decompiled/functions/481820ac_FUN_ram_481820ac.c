/* Firmware entry: 0x481820ac */

int FUN_ram_481820ac(uint *param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = 0;
  if (param_2 != 0) {
    puVar2 = param_1 + param_2;
    uVar1 = 0;
    do {
      uVar3 = *param_1;
      param_1 = param_1 + 1;
      uVar1 = uVar1 | uVar3;
    } while (param_1 != puVar2);
  }
  return (int)(-(uVar1 >> 1) | -uVar1) >> 0x1f;
}


