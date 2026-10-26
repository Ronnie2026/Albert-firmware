/* Firmware entry: 0x4800f02c */

undefined4 FUN_ram_4800f02c(uint param_1,void *param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 0x10) {
    pvVar1 = memset(param_2,0,0x58);
    *(undefined4 *)((int)pvVar1 + 4) = 0x21b6;
    *(undefined2 *)((int)pvVar1 + 8) = 1;
    uVar2 = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_ram_4819bf88();
    *puVar3 = 9;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


