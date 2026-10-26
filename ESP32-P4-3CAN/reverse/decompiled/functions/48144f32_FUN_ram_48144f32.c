/* Firmware entry: 0x48144f32 */

void FUN_ram_48144f32(int param_1)

{
  byte bVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *(int *)(param_1 + 0xc4);
  if (iVar2 == 0) {
    return;
  }
  bVar1 = *(byte *)(iVar2 + 5);
  if (bVar1 < 6) {
    if (bVar1 < 3) {
      if (bVar1 == 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
LAB_ram_48144f60:
      *(undefined1 *)(iVar2 + 6) = 0;
      FUN_ram_48143d6a();
      return;
    }
  }
  else if (bVar1 != 10) {
    if (0xc < bVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/dhcp.c",0x40a,
                       "dhcp_network_changed_link_up","invalid dhcp->state");
    }
    goto LAB_ram_48144f60;
  }
  *(undefined1 *)(iVar2 + 6) = 0;
  FUN_ram_48144b4a();
  return;
}


