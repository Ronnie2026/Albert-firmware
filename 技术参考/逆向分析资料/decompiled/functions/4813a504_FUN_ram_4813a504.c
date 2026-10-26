/* Firmware entry: 0x4813a504 */

void FUN_ram_4813a504(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  undefined1 uStack_3c;
  byte bStack_3b;
  int iStack_38;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/netif.c",0x5b3,"netif_ip6_addr_set_state",
                     "netif != NULL");
  }
  if (2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/netif.c",0x5b4,"netif_ip6_addr_set_state",
                     "invalid index");
  }
  iVar6 = param_1 + param_2;
  bVar1 = *(byte *)(iVar6 + 0x94);
  if (bVar1 == param_3) {
    return;
  }
  uVar3 = (undefined1)param_3;
  if ((*(byte *)(param_1 + 0xe7) & 0x40) != 0) {
    FUN_ram_4814c83a();
  }
  iVar2 = param_2 * 0x18 + 0x4c + param_1;
  if ((bVar1 & 0x10) == 0) {
    *(undefined1 *)(iVar6 + 0x94) = uVar3;
    if (((param_3 & 0x10) != 0) && ((*(byte *)(param_1 + 0xe7) & 5) == 5)) {
      FUN_ram_48149bb6(param_1);
    }
  }
  else if ((param_3 & 0x10) == 0) {
    FUN_ram_4813d1fe(iVar2,0);
    FUN_ram_481435c4(iVar2,0);
    FUN_ram_4813be48(iVar2,0);
    *(undefined1 *)(iVar6 + 0x94) = uVar3;
  }
  else {
    *(undefined1 *)(iVar6 + 0x94) = uVar3;
  }
  uStack_3c = (undefined1)param_2;
  bStack_3b = bVar1;
  iStack_38 = iVar2;
  puVar4 = DAT_ram_4ff6e1b0;
  while (puVar4 != (undefined4 *)0x0) {
    pcVar5 = (code *)*puVar4;
    puVar4 = (undefined4 *)puVar4[1];
    (*pcVar5)(param_1,0x200,&uStack_3c);
  }
  return;
}


