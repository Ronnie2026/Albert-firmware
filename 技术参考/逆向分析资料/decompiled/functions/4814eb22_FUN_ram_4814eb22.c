/* Firmware entry: 0x4814eb22 */

undefined4 FUN_ram_4814eb22(int param_1,void *param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_2 != (void *)0x0) && (param_1 - 0x36U < 10)) {
    pvVar1 = memset(param_2,0,0x58);
    *(undefined4 *)((int)pvVar1 + 4) = 0xc000;
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0;
  }
  puVar2 = (undefined4 *)FUN_ram_4819bf88();
  *puVar2 = 9;
  return 0xffffffff;
}


