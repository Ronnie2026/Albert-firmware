/* Firmware entry: 0x4802e0d4 */

undefined4 FUN_ram_4802e0d4(int param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uStack_34;
  uint uStack_30;
  ushort uStack_2c;
  undefined1 uStack_2a;
  byte bStack_29;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar2 = '\x03';
  while( true ) {
    bVar1 = *(byte *)(param_1 + 0x17ec7);
    uVar4 = bVar1 + 1;
    *(byte *)(param_1 + 0x17ec7) =
         (char)uVar4 - (((byte)((ulonglong)uVar4 * 0xaaaaaaab >> 0x20) & 0xfe) + (char)(uVar4 / 3));
    iVar3 = *(int *)((uint)bVar1 * 0x3578 + param_1 + 0x520);
    if ((iVar3 != 0) && (iVar3 = FUN_ram_4ff3b4aa(iVar3,&uStack_34,0), iVar3 == 1)) break;
    cVar2 = cVar2 + -1;
    if (cVar2 == '\0') {
      return 0;
    }
  }
  puVar5 = param_2;
  do {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while (puVar5 != param_2 + 9);
  *(byte *)((int)param_2 + 0xd) = bStack_29 & 0x7f;
  *(byte *)((int)param_2 + 0xe) = bStack_29 >> 7;
  *param_2 = (uint)uStack_2c;
  *(undefined1 *)(param_2 + 1) = uStack_2a;
  param_2[4] = uStack_34;
  param_2[8] = uStack_30;
  *(undefined1 *)((int)param_2 + 5) = uStack_28;
  *(undefined1 *)((int)param_2 + 0x1a) = 1;
  *(undefined1 *)((int)param_2 + 6) = uStack_27;
  *(undefined1 *)((int)param_2 + 7) = uStack_26;
  *(undefined1 *)(param_2 + 2) = uStack_25;
  *(undefined1 *)((int)param_2 + 9) = uStack_24;
  *(undefined1 *)((int)param_2 + 10) = uStack_23;
  *(undefined1 *)((int)param_2 + 0xb) = uStack_22;
  *(undefined1 *)(param_2 + 3) = uStack_21;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return 1;
}


