/* Firmware entry: 0x48166b36 */

undefined4 FUN_ram_48166b36(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 auStack_14 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*param_1 == '[') || (pcVar1 = strchr(param_1,0x3a), pcVar1 == (char *)0x0)) {
    if ((param_2 == 0x50) || (param_2 == 0x1bb)) {
      puVar3 = &DAT_ram_481cd004;
      goto LAB_ram_48166bb2;
    }
    iVar2 = 0x154;
  }
  else {
    if ((param_2 == 0x50) || (param_2 == 0x1bb)) {
      puVar3 = &DAT_ram_481dd15c;
LAB_ram_48166bb2:
      iVar2 = FUN_ram_4819afd6(auStack_14,puVar3,param_1);
      goto LAB_ram_48166b98;
    }
    iVar2 = 0x14c;
  }
  iVar2 = FUN_ram_4819afd6(auStack_14,"ESP_HTTP_CLIENT_EVENT" + iVar2 + 4,param_1,param_2);
LAB_ram_48166b98:
  if (iVar2 == -1) {
    auStack_14[0] = 0;
  }
  return auStack_14[0];
}


