/* Firmware entry: 0x4814de5a */

int FUN_ram_4814de5a(undefined1 *param_1,int param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int aiStack_88 [4];
  undefined1 auStack_78 [100];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == (undefined1 *)0x0) || (param_1[0x14] != '\x06')) {
    DAT_ram_4ff6d3e0 = 0;
    DAT_ram_4ff6d3dc = 0;
    DAT_ram_4ff6d3d8 = 0;
    DAT_ram_4ff6d3e2 = 0xffff;
    DAT_ram_4ff6d3e7 = param_1[3];
    DAT_ram_4ff6d3e5 = param_1[1];
    DAT_ram_4ff6d3e6 = param_1[2];
    DAT_ram_4ff6d3e4 = *param_1;
    DAT_ram_4ff6d3f0 = 0;
    DAT_ram_4ff6d3ec = 0;
    DAT_ram_4ff6d3f2 = 0xffff;
    DAT_ram_4ff6d3e8 = 0;
    DAT_ram_4ff6d3f4 = *param_3;
    DAT_ram_4ff6d3f5 = param_3[1];
    DAT_ram_4ff6d3f6 = param_3[2];
    DAT_ram_4ff6d3f7 = param_3[3];
  }
  else {
    FUN_ram_4ff45158(&DAT_ram_4ff6d3d8,param_1,0x10);
    FUN_ram_4ff45158(&DAT_ram_4ff6d3e8,param_3,0x10);
  }
  DAT_ram_4ff6d3f8 = (ushort)((uint)param_2 >> 8) | (ushort)(param_2 << 8);
  DAT_ram_4ff6d3fa = (ushort)((uint)param_4 >> 8) | (ushort)(param_4 << 8);
  MD5Init(auStack_78);
  MD5Update(auStack_78,&DAT_ram_4ff6d3d8,0x40);
  MD5Final(aiStack_88,auStack_78);
  iVar1 = DAT_ram_4ff6e238 + aiStack_88[0];
  iVar2 = thunk_FUN_ram_4ff3c5d4();
  return iVar2 * 0xfa + iVar1;
}


