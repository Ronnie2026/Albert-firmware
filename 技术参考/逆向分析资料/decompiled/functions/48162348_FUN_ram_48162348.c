/* Firmware entry: 0x48162348 */

undefined4 FUN_ram_48162348(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = param_1[3];
  *(char *)(param_2 + 2) = (char)uVar1;
  uVar2 = param_1[2];
  *(undefined1 *)((int)param_2 + 0xd) = 0;
  *(char *)((int)param_2 + 10) = (char)(uVar2 >> 0x10);
  *(char *)(param_2 + 3) = (char)uVar2;
  *(char *)((int)param_2 + 9) = (char)(uVar2 >> 0x18);
  *(char *)((int)param_2 + 0xb) = (char)(uVar2 >> 8);
  uVar2 = param_1[1];
  uVar3 = *param_1;
  param_2[1] = uVar1 >> 8 & 0xffff;
  *param_2 = uVar1 >> 0x18;
  param_2[4] = uVar2 >> 0x18;
  param_2[5] = uVar3 >> 0x18 | uVar2 << 8;
  param_2[6] = (uVar3 & 0xfffff) >> 8;
  return 0;
}


