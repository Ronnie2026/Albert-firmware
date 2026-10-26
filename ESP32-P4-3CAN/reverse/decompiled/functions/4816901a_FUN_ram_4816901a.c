/* Firmware entry: 0x4816901a */

undefined4 FUN_ram_4816901a(int *param_1,char *param_2,char *param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == (char *)0x0) {
    uVar4 = FUN_ram_48168f64();
    return uVar4;
  }
  if ((param_1 != (int *)0x0) && (param_2 != (char *)0x0)) {
    for (puVar1 = (undefined4 *)*param_1; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[2]) {
      iVar3 = strcasecmp((char *)*puVar1,param_2);
      if (iVar3 == 0) {
        thunk_FUN_ram_4ff209c6(puVar1[1]);
        pcVar2 = strdup(param_3);
        puVar1[1] = pcVar2;
        FUN_ram_481694da(puVar1 + 1);
        return 0;
      }
    }
  }
  puVar1 = (undefined4 *)FUN_ram_4ff45080(1,0xc);
  if (puVar1 == (undefined4 *)0x0) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"HTTP_HEADER","E (%lu) %s: %s(%d): Memory exhausted\n",uVar4,"HTTP_HEADER",
                     "http_header_new_item",0x53);
  }
  else {
    iVar3 = FUN_ram_481692f0(puVar1,param_2,0xffffffff);
    if (iVar3 != 0) {
      FUN_ram_481694da(puVar1);
      iVar3 = FUN_ram_481692f0(puVar1 + 1,param_3,0xffffffff);
      if (iVar3 != 0) {
        FUN_ram_481694da(puVar1 + 1);
        piVar5 = (int *)param_1[1];
        puVar1[2] = 0;
        *piVar5 = (int)puVar1;
        param_1[1] = (int)(puVar1 + 2);
        return 0;
      }
    }
    thunk_FUN_ram_4ff209c6(*puVar1);
    thunk_FUN_ram_4ff209c6(puVar1[1]);
    thunk_FUN_ram_4ff209c6(puVar1);
  }
  return 0x101;
}


