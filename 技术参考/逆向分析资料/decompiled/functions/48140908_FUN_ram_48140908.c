/* Firmware entry: 0x48140908 */

int FUN_ram_48140908(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,uint param_7,undefined4 param_8)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_4813ad9a(0x36,param_2 + param_3 + 0x14 & 0xffff,0x280);
  if (iVar3 != 0) {
    if ((uint)*(ushort *)(iVar3 + 10) <= (param_2 + 0x13 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x727,
                       "tcp_output_alloc_header_common",
                       "check that first pbuf can hold struct tcp_hdr");
    }
    puVar1 = *(undefined1 **)(iVar3 + 4);
    uVar2 = FUN_ram_48137fc8(param_5);
    *puVar1 = (char)uVar2;
    puVar1[1] = (char)((ushort)uVar2 >> 8);
    uVar2 = FUN_ram_48137fc8(param_6);
    puVar1[3] = (char)((ushort)uVar2 >> 8);
    puVar1[2] = (char)uVar2;
    puVar1[5] = (char)((uint)param_4 >> 8);
    puVar1[6] = (char)((uint)param_4 >> 0x10);
    puVar1[7] = (char)((uint)param_4 >> 0x18);
    puVar1[4] = (char)param_4;
    uVar4 = FUN_ram_48137fd6(param_1);
    puVar1[8] = (char)uVar4;
    puVar1[9] = (char)((uint)uVar4 >> 8);
    puVar1[10] = (char)((uint)uVar4 >> 0x10);
    puVar1[0xb] = (char)((uint)uVar4 >> 0x18);
    uVar2 = FUN_ram_48137fc8((param_7 | ((param_2 >> 2) + 5) * 0x1000) & 0xffff);
    puVar1[0xc] = (char)uVar2;
    puVar1[0xd] = (char)((ushort)uVar2 >> 8);
    uVar2 = FUN_ram_48137fc8(param_8);
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0xe] = (char)uVar2;
    puVar1[0xf] = (char)((ushort)uVar2 >> 8);
  }
  return iVar3;
}


