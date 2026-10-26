/* Firmware entry: 0x4800eedc */

undefined4 FUN_ram_4800eedc(char *param_1,void *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*param_1 == '/') && (param_1[1] == '\0')) {
    pvVar2 = memset(param_2,0,0x58);
    *(undefined4 *)((int)pvVar2 + 4) = 0x21b6;
    *(undefined2 *)((int)pvVar2 + 8) = 1;
    return 0;
  }
  puVar1 = (undefined4 *)FUN_ram_4819bf88();
  *puVar1 = 2;
  return 0xffffffff;
}


