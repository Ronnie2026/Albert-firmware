/* Firmware entry: 0x4814369e */

int FUN_ram_4814369e(int param_1,undefined4 *param_2,uint param_3,undefined2 *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *__s;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_1 == 0) || (param_2 == (undefined4 *)0x0)) ||
     (iVar4 = FUN_ram_4813ad9a(0x4a,0x135,0x280), iVar4 == 0)) {
    return 0;
  }
  if (*(ushort *)(iVar4 + 10) < 0x135) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/dhcp.c",0x7ce,"dhcp_create_msg",
                     "dhcp_create_msg: check that first pbuf can hold struct dhcp_msg");
  }
  if ((param_3 == 3) && (*(char *)((int)param_2 + 5) != '\x03')) {
    __s = *(undefined1 **)(iVar4 + 4);
    memset(__s,0,0x135);
    *__s = 1;
    __s[1] = 1;
    __s[2] = *(undefined1 *)(param_1 + 0xe6);
    uVar5 = FUN_ram_48137fd6(*param_2);
    __s[4] = (char)uVar5;
    __s[5] = (char)((uint)uVar5 >> 8);
    __s[6] = (char)((uint)uVar5 >> 0x10);
    __s[7] = (char)((uint)uVar5 >> 0x18);
LAB_ram_4814380e:
    if (1 < (byte)(*(char *)((int)param_2 + 5) - 4U)) goto LAB_ram_48143756;
  }
  else {
    if (*(char *)((int)param_2 + 6) == '\0') {
      DAT_ram_4ff6e20c = FUN_ram_4ff2d260();
    }
    __s = *(undefined1 **)(iVar4 + 4);
    *param_2 = DAT_ram_4ff6e20c;
    memset(__s,0,0x135);
    *__s = 1;
    __s[1] = 1;
    __s[2] = *(undefined1 *)(param_1 + 0xe6);
    uVar5 = FUN_ram_48137fd6(*param_2);
    __s[4] = (char)uVar5;
    __s[5] = (char)((uint)uVar5 >> 8);
    __s[6] = (char)((uint)uVar5 >> 0x10);
    __s[7] = (char)((uint)uVar5 >> 0x18);
    if ((400U >> (param_3 & 0x1f) & 1) == 0) {
      if (param_3 != 3) goto LAB_ram_48143756;
      goto LAB_ram_4814380e;
    }
  }
  uVar1 = *(undefined1 *)(param_1 + 5);
  uVar2 = *(undefined1 *)(param_1 + 6);
  uVar3 = *(undefined1 *)(param_1 + 7);
  __s[0xc] = *(undefined1 *)(param_1 + 4);
  __s[0xd] = uVar1;
  __s[0xe] = uVar2;
  __s[0xf] = uVar3;
LAB_ram_48143756:
  puVar7 = (undefined1 *)(param_1 + 0xe0);
  puVar6 = __s + 0x1c;
  do {
    uVar1 = *puVar7;
    puVar7 = puVar7 + 1;
    *puVar6 = uVar1;
    puVar6 = puVar6 + 1;
  } while (puVar7 != (undefined1 *)(param_1 + 0xe6));
  __s[0xf2] = (char)param_3;
  __s[0xec] = 99;
  __s[0xef] = 99;
  __s[0xed] = 0x82;
  __s[0xee] = 0x53;
  __s[0xf0] = 0x35;
  __s[0xf1] = 1;
  if (param_4 != (undefined2 *)0x0) {
    *param_4 = 3;
  }
  return iVar4;
}


