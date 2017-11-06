#ifndef netvid_hook_h__
#define netvid_hook_h__

#ifdef __cplusplus
extern "C"
{
#endif

	extern void netvid_new_frame(const void *frame, unsigned frame_width, unsigned frame_height, unsigned bpp, unsigned pitch, float aspect_ratio);

#ifdef __cplusplus
}
#endif

#endif // netvid_hook_h__
