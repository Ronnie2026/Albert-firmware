/* Firmware entry: 0x4814e070 */

void FUN_ram_4814e070(int param_1,uint param_2,int param_3,ushort *param_4)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_2 < 0xd) && ((0x107bU >> (param_2 & 0x1f) & 1) != 0)) {
    uVar2 = *param_4;
    puVar4 = (undefined1 *)(param_3 + 0xf0 + (uint)uVar2);
    if (0x45 < *(byte *)(param_1 + 0xe6) + 4 + (uint)uVar2) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"LWIP_ERROR",
                       "E (%lu) %s: dhcp_append(client_id): options_out_len + 3 + (netif->hwaddr_len + 1) <= DHCP_OPTIONS_LEN, please increase LWIP_DHCP_OPTIONS_LEN\n"
                       ,uVar3,"LWIP_ERROR");
      return;
    }
    *param_4 = *(byte *)(param_1 + 0xe6) + uVar2 + 3;
    *puVar4 = 0x3d;
    cVar1 = *(char *)(param_1 + 0xe6);
    puVar4[2] = 1;
    puVar4[1] = cVar1 + '\x01';
    uVar5 = 0;
    if (*(char *)(param_1 + 0xe6) != '\0') {
      do {
        uVar6 = uVar5 + 1;
        puVar4[uVar5 + 3] = *(undefined1 *)(param_1 + uVar5 + 0xe0);
        uVar5 = uVar6;
      } while (uVar6 < *(byte *)(param_1 + 0xe6));
    }
  }
  return;
}


