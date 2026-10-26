/* Firmware entry: 0x4814d1e6 */

undefined4 FUN_ram_4814d1e6(int *param_1,int param_2,uint param_3,int param_4,ushort *param_5)

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  byte *pbVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0x5ec - *(ushort *)(param_2 + 10) < 2) {
    uVar2 = (*(code *)param_1[1])
                      (*param_1,*(undefined4 *)(param_2 + 4),(uint)*(ushort *)(param_2 + 10),
                       *(undefined4 *)(*param_1 + 0x18),param_5,(code *)param_1[1]);
    if (uVar2 != *(ushort *)(param_2 + 10)) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xfffffff4;
    }
    *(undefined2 *)(param_2 + 10) = 0;
  }
  if (param_5 != (ushort *)0x0) {
    *param_5 = *(ushort *)(&DAT_ram_482370bc + ((*param_5 ^ param_3) & 0xff) * 2) ^ *param_5 >> 8;
  }
  sVar3 = *(ushort *)(param_2 + 10) + 1;
  pbVar4 = (byte *)(*(int *)(param_2 + 4) + (uint)*(ushort *)(param_2 + 10));
  if ((param_4 == 0) ||
     (((int)(uint)*(byte *)((int)param_1 + (param_3 >> 3) + 0xc) >> (param_3 & 7) & 1U) == 0)) {
    *(short *)(param_2 + 10) = sVar3;
    *pbVar4 = (byte)param_3;
  }
  else {
    *(short *)(param_2 + 10) = sVar3;
    *pbVar4 = 0x7d;
    uVar1 = *(ushort *)(param_2 + 10);
    *(ushort *)(param_2 + 10) = uVar1 + 1;
    *(byte *)(*(int *)(param_2 + 4) + (uint)uVar1) = (byte)param_3 ^ 0x20;
  }
  return 0;
}


