/* Firmware entry: 0x48157d72 */

void FUN_ram_48157d72(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int aiStack_24 [7];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4815682a();
  if ((iVar1 != 0) && (param_1 != 0)) {
    *(undefined1 *)(param_1 + 0x44) = 0;
    if ((*(int *)(param_1 + 0x10) == 0) ||
       (*(int *)(*(int *)(param_1 + 0x10) + 4) == DAT_ram_48236f9c)) {
      aiStack_24[1] = 0;
      aiStack_24[2] = 0;
      aiStack_24[3] = 0;
      aiStack_24[4] = 0;
      aiStack_24[0] = param_1;
      FUN_ram_48157d0e(param_1,4);
      puVar3 = *(undefined1 **)(param_1 + 0xc);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      if (((*(uint *)(param_1 + 0x54) & 1) != 0) && (*(int *)(param_1 + 0x3c) == 1)) {
        puVar4 = *(undefined4 **)(param_1 + 8);
        *puVar4 = 0;
        puVar4[2] = 0;
        puVar4[1] = 0;
      }
      if ((*(int *)(param_1 + 0x4c) != 0) &&
         (iVar1 = FUN_ram_481a3b62(PTR_s_IP_EVENT_ram_481da530_ram_48237730,*(int *)(param_1 + 0x4c)
                                   ,aiStack_24,0x14,0), iVar1 != 0)) {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp_netif_lwip",
                         "E (%lu) %s: ip lost timer: failed to post lost ip event (%x)\n",uVar2,
                         "esp_netif_lwip",iVar1);
      }
    }
  }
  return;
}


