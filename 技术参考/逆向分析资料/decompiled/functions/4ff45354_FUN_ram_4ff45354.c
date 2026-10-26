/* Firmware entry: 0x4ff45354 */

undefined8 FUN_ram_4ff45354(uint *param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ec14(&DAT_ram_4ff47f60,0xffffffff);
  uVar1 = *(undefined8 *)param_1;
  *param_1 = *param_1 | param_2;
  param_1[1] = param_1[1] | param_3;
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ee10(&DAT_ram_4ff47f60);
  return uVar1;
}


