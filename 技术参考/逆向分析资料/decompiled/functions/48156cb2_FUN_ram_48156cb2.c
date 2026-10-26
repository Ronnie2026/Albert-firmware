/* Firmware entry: 0x48156cb2 */

undefined4 FUN_ram_48156cb2(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    return 0x102;
  }
  if (*(int *)(iVar1 + 0x40) != 1) {
    iVar4 = *(int *)(iVar1 + 0x10);
    if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0xe7) & 1) != 0)) {
      puVar3 = *(undefined4 **)(iVar1 + 8);
      uVar2 = *puVar3;
      uStack_24 = *(undefined1 *)(puVar3 + 1);
      uStack_23 = *(undefined1 *)((int)puVar3 + 5);
      uStack_22 = *(undefined1 *)((int)puVar3 + 6);
      uStack_21 = *(undefined1 *)((int)puVar3 + 7);
      FUN_ram_4818cb64(*(undefined4 *)(iVar1 + 0x24),FUN_ram_48156b50,iVar1);
      FUN_ram_4818cad6(*(undefined4 *)(iVar1 + 0x24),1,&uStack_24,4);
      iVar4 = FUN_ram_4818cb72(*(undefined4 *)(iVar1 + 0x24),iVar4,uVar2);
      uVar2 = 0;
      if (iVar4 != 0) {
        uVar2 = FUN_ram_4ff44d14(0);
        FUN_ram_4ff44bf0(1,"esp_netif_lwip","E (%lu) %s: DHCP server cannot be started\n",uVar2,
                         "esp_netif_lwip");
        uVar2 = 0x500d;
      }
      *(uint *)(iVar1 + 0x40) = (uint)(iVar4 == 0);
      return uVar2;
    }
    *(undefined4 *)(iVar1 + 0x40) = 0;
    return 0;
  }
  return 0x5004;
}


