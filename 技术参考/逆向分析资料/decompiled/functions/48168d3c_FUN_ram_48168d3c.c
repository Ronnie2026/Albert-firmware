/* Firmware entry: 0x48168d3c */

undefined4 * FUN_ram_48168d3c(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_1c [4];
  char *pcStack_18;
  int iStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcStack_18 = (char *)0x0;
  iStack_14 = 0;
  iVar2 = FUN_ram_4819afd6(&pcStack_18,"%s:%s",param_1,param_2);
  pcVar1 = pcStack_18;
  if (-1 < iVar2) {
    if (pcStack_18 == (char *)0x0) {
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"HTTP_AUTH","E (%lu) %s: %s(%d): Memory exhausted\n",uVar5,"HTTP_AUTH",
                       "http_auth_basic",0xeb);
    }
    else {
      sVar3 = strlen(pcStack_18);
      thunk_FUN_ram_48188292(0,0,&iStack_14,pcVar1,sVar3);
      iVar2 = iStack_14;
      puVar4 = (undefined4 *)FUN_ram_4ff45080(1,iStack_14 + 7);
      pcVar1 = pcStack_18;
      if (puVar4 != (undefined4 *)0x0) {
        *(undefined2 *)(puVar4 + 1) = 0x2063;
        *puVar4 = 0x69736142;
        *(undefined1 *)((int)puVar4 + 6) = 0;
        sVar3 = strlen(pcStack_18);
        thunk_FUN_ram_48188292((int)puVar4 + 6,iVar2,auStack_1c,pcVar1,sVar3);
        thunk_FUN_ram_4ff209c6(pcStack_18);
        return puVar4;
      }
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"HTTP_AUTH","E (%lu) %s: %s(%d): Memory exhausted\n",uVar5,"HTTP_AUTH",
                       "http_auth_basic",0xee);
      thunk_FUN_ram_4ff209c6(pcStack_18);
    }
  }
  return (undefined4 *)0x0;
}


