/* Firmware entry: 0x4800cd46 */

undefined4 FUN_ram_4800cd46(undefined4 param_1,void *param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (void *)0x0) {
    puVar3 = (undefined4 *)FUN_ram_4819bf88();
    *puVar3 = 0x16;
    uVar2 = 0xffffffff;
  }
  else {
    puVar1 = memset(param_2,0,0x1c);
    if (DAT_ram_4ff48384 == 0) {
      *puVar1 = 8;
    }
    else if (DAT_ram_4ff48384 == 1) {
      *puVar1 = 2;
    }
    *(undefined4 *)(puVar1 + 0xc) = 1000000;
    *(undefined4 *)(puVar1 + 10) = 1000000;
    puVar1[2] = 3;
    uVar2 = 0;
  }
  return uVar2;
}


