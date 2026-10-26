/* Firmware entry: 0x4815fda4 */

undefined4 FUN_ram_4815fda4(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = *(byte *)(param_2 + 1);
  FUN_ram_4819a582(param_3,"TUPLE: %s, size: %d\n",*(undefined4 *)(param_1 + 4),bVar1);
  uVar2 = 0x104;
  if (3 < bVar1) {
    FUN_ram_4819a582(param_3,"  MANF: %04X, CARD: %04X\n",*(undefined2 *)(param_2 + 2),
                     *(undefined2 *)(param_2 + 4));
    uVar2 = 0;
  }
  return uVar2;
}


